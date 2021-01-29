/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 11:18:54 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/12 01:35:57 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
}

int		Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
	if (deposit > 0)
	{
		this->_amount += deposit;
		Account::_totalAmount += deposit;
		this->_nbDeposits++;
	}
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	if (_amount - withdrawal >= 0)
	{
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals;
	}
	else
		std::cout << ";withdrawal:refused";
	std::cout << std::endl;
}

int		Account::checkAmount(void)const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t current_time(std::time(&current_time));
	struct tm *time_processed;
	char timestamp[80];

	time_processed = localtime(&current_time);
	strftime(timestamp,sizeof(timestamp),"[%Y%m%d_%H%M%S] ",time_processed);
	std::cout << timestamp;
}

Account::Account( void){
}