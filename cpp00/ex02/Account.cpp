/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:07:50 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/21 13:12:02 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

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

Account::~Account(void)
{
}