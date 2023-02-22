/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:07:50 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/22 18:41:36 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "created" << std::endl;
}

Account::Account()
{
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t		tyme;
	struct tm	*datetime;

	tyme = std::time(nullptr);
	datetime = localtime(&tyme);
	std::cout << "[" << datetime->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << datetime->tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2) << datetime->tm_mday << "_";
	std::cout << std::setfill('0') << std::setw(2) << datetime->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << datetime->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << datetime->tm_sec << "] ";
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"
				<< "total:" << _totalAmount << ";"
				<< "deposits:" << _totalNbDeposits << ";"
				<< "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "deposits:" << this->_nbDeposits << ";"
				<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->_amount << ";"
				<< "deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits += 1;
	this->_totalNbDeposits += 1;
	std::cout << "amount:" << this->_amount << ";"
				<< "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->_amount << ";"
				<< "withdrawal:";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_nbWithdrawals += 1;
		this->_totalNbWithdrawals += 1;
		std::cout << withdrawal << ";"
					<< "amount:" << this->_amount << ";"
					<< "nb_withdrawals:" << this->_nbDeposits << std::endl;
		return (true);
	}
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}
