﻿#pragma once

#include "Common.h"

namespace MyBot
{
	
	namespace MetaTypes
	{
		enum {
			Unit,
			Tech,
			Upgrade,
			Default
		};
	}

	
	class MetaType
	{
		size_t                  _type;
		Race             _race;

		UnitType         _unitType;
		TechType         _techType;
		UpgradeType      _upgradeType;

	public:

		MetaType ();
		MetaType (const string &name);
		MetaType (UnitType t);
		MetaType (TechType t);
		MetaType (UpgradeType t);

		bool    isUnit()		const;
		bool    isTech()		const;
		bool    isUpgrade()	    const;
		bool    isCommand()	    const;
		bool    isBuilding()	const;
		bool    isRefinery()	const;

		const size_t &type() const;
		const Race &getRace() const;

		const UnitType &getUnitType() const;
		const TechType &getTechType() const;
		const UpgradeType &getUpgradeType() const;

		int     supplyRequired();
		int     mineralPrice()  const;
		int     gasPrice()      const;

		UnitType whatBuilds() const;
		string getName() const;
	};

	typedef pair<MetaType, size_t> MetaPair;
	typedef vector<MetaPair> MetaPairVector;

}