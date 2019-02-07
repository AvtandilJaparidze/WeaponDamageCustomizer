#pragma once
#include <fstream>
#include "WeaponDamageCustomizer.h"

void ReadConfig()
{

	std::ifstream file(ArkApi::Tools::GetCurrentDir() + "/ArkApi/Plugins/WeaponDamageCustomizer/config.json");
	if (!file.is_open())
		throw std::runtime_error("Can't open config.json");

	file >> WeaponDamageCustomizer::config;

	file.close();
	WeaponDamageCustomizer::StonePickDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["StonePickDamageMultiplierToWild"];
	WeaponDamageCustomizer::StoneHatchetDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["StoneHatchetDamageMultiplierToWild"];
	WeaponDamageCustomizer::MetalPickDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["MetalPickDamageMultiplierToWild"];
	WeaponDamageCustomizer::MetalHatchetDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["MetalHatchetDamageMultiplierToWild"];
	WeaponDamageCustomizer::MetalSickleDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["MetalSickleDamageMultiplierToWild"];
	WeaponDamageCustomizer::ChainsawDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["ChainsawDamageMultiplierToWild"];
	WeaponDamageCustomizer::SpearDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["SpearDamageMultiplierToWild"];
	WeaponDamageCustomizer::PikeDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["PikeDamageMultiplierToWild"];
	WeaponDamageCustomizer::WoodenClubDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["WoodenClubDamageMultiplierToWild"];
	WeaponDamageCustomizer::RegularSwordDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["RegularSwordDamageMultiplierToWild"];
	WeaponDamageCustomizer::ElectricProdDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["ElectricProdDamageMultiplierToWild"];
	WeaponDamageCustomizer::SlingshotDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["SlingshotDamageMultiplierToWild"];
	WeaponDamageCustomizer::BoomerangDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["BoomerangDamageMultiplierToWild"];
	WeaponDamageCustomizer::WhipDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["WhipDamageMultiplierToWild"];
	WeaponDamageCustomizer::BowDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["BowDamageMultiplierToWild"];
	WeaponDamageCustomizer::CrossBowDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["CrossBowDamageMultiplierToWild"];
	WeaponDamageCustomizer::CompoundBowDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["CompoundBowDamageMultiplierToWild"];
	WeaponDamageCustomizer::HarpoonLauncherDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["HarpoonLauncherDamageMultiplierToWild"];
	WeaponDamageCustomizer::SimplePistolDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["SimplePistolDamageMultiplierToWild"];
	WeaponDamageCustomizer::LongneckDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["LongneckDamageMultiplierToWild"];
	WeaponDamageCustomizer::PrimitiveShotgunDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["PrimitiveShotgunDamageMultiplierToWild"];
	WeaponDamageCustomizer::FabricatedPistolDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["FabricatedPistolDamageMultiplierToWild"];
	WeaponDamageCustomizer::PumpShotgunDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["PumpShotgunDamageMultiplierToWild"];
	WeaponDamageCustomizer::AssaultRifleDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["AssaultRifleDamageMultiplierToWild"];
	WeaponDamageCustomizer::SniperRifleDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["SniperRifleDamageMultiplierToWild"];
	WeaponDamageCustomizer::FlamethrowerDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["FlamethrowerDamageMultiplierToWild"];
	WeaponDamageCustomizer::ChargeLanternDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["ChargeLanternDamageMultiplierToWild"];
	WeaponDamageCustomizer::TekRifleDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["TekRifleDamageMultiplierToWild"];
	WeaponDamageCustomizer::TekSwordDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["TekSwordDamageMultiplierToWild"];
	WeaponDamageCustomizer::TekRailgunDamageMultiplierToWild = WeaponDamageCustomizer::config["ToWild"]["TekRailgunDamageMultiplierToWild"];
	WeaponDamageCustomizer::StonePickDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["StonePickDamageMultiplierToTamed"];
	WeaponDamageCustomizer::StoneHatchetDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["StoneHatchetDamageMultiplierToTamed"];
	WeaponDamageCustomizer::MetalPickDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["MetalPickDamageMultiplierToTamed"];
	WeaponDamageCustomizer::MetalHatchetDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["MetalHatchetDamageMultiplierToTamed"];
	WeaponDamageCustomizer::MetalSickleDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["MetalSickleDamageMultiplierToTamed"];
	WeaponDamageCustomizer::ChainsawDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["ChainsawDamageMultiplierToTamed"];
	WeaponDamageCustomizer::SpearDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["SpearDamageMultiplierToTamed"];
	WeaponDamageCustomizer::PikeDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["PikeDamageMultiplierToTamed"];
	WeaponDamageCustomizer::WoodenClubDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["WoodenClubDamageMultiplierToTamed"];
	WeaponDamageCustomizer::RegularSwordDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["RegularSwordDamageMultiplierToTamed"];
	WeaponDamageCustomizer::ElectricProdDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["ElectricProdDamageMultiplierToTamed"];
	WeaponDamageCustomizer::SlingshotDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["SlingshotDamageMultiplierToTamed"];
	WeaponDamageCustomizer::BoomerangDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["BoomerangDamageMultiplierToTamed"];
	WeaponDamageCustomizer::WhipDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["WhipDamageMultiplierToTamed"];
	WeaponDamageCustomizer::BowDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["BowDamageMultiplierToTamed"];
	WeaponDamageCustomizer::CrossBowDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["CrossBowDamageMultiplierToTamed"];
	WeaponDamageCustomizer::CompoundBowDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["CompoundBowDamageMultiplierToTamed"];
	WeaponDamageCustomizer::HarpoonLauncherDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["HarpoonLauncherDamageMultiplierToTamed"];
	WeaponDamageCustomizer::SimplePistolDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["SimplePistolDamageMultiplierToTamed"];
	WeaponDamageCustomizer::LongneckDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["LongneckDamageMultiplierToTamed"];
	WeaponDamageCustomizer::PrimitiveShotgunDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["PrimitiveShotgunDamageMultiplierToTamed"];
	WeaponDamageCustomizer::FabricatedPistolDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["FabricatedPistolDamageMultiplierToTamed"];
	WeaponDamageCustomizer::PumpShotgunDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["PumpShotgunDamageMultiplierToTamed"];
	WeaponDamageCustomizer::AssaultRifleDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["AssaultRifleDamageMultiplierToTamed"];
	WeaponDamageCustomizer::SniperRifleDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["SniperRifleDamageMultiplierToTamed"];
	WeaponDamageCustomizer::FlamethrowerDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["FlamethrowerDamageMultiplierToTamed"];
	WeaponDamageCustomizer::ChargeLanternDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["ChargeLanternDamageMultiplierToTamed"];
	WeaponDamageCustomizer::TekRifleDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["TekRifleDamageMultiplierToTamed"];
	WeaponDamageCustomizer::TekSwordDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["TekSwordDamageMultiplierToTamed"];
	WeaponDamageCustomizer::TekRailgunDamageMultiplierToTamed = WeaponDamageCustomizer::config["ToTamed"]["TekRailgunDamageMultiplierToTamed"];
	WeaponDamageCustomizer::StonePickDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["StonePickDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::StoneHatchetDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["StoneHatchetDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::MetalPickDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["MetalPickDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::MetalHatchetDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["MetalHatchetDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::MetalSickleDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["MetalSickleDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::ChainsawDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["ChainsawDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::SpearDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["SpearDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::PikeDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["PikeDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::WoodenClubDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["WoodenClubDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::RegularSwordDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["RegularSwordDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::ElectricProdDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["ElectricProdDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::SlingshotDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["SlingshotDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::BoomerangDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["BoomerangDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::WhipDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["WhipDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::BowDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["BowDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::CrossBowDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["CrossBowDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::CompoundBowDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["CompoundBowDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::HarpoonLauncherDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["HarpoonLauncherDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::SimplePistolDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["SimplePistolDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::LongneckDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["LongneckDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::PrimitiveShotgunDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["PrimitiveShotgunDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::FabricatedPistolDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["FabricatedPistolDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::PumpShotgunDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["PumpShotgunDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::AssaultRifleDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["AssaultRifleDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::SniperRifleDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["SniperRifleDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::FlamethrowerDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["FlamethrowerDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::ChargeLanternDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["ChargeLanternDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::TekRifleDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["TekRifleDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::TekSwordDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["TekSwordDamageMultiplierToPlayer"];
	WeaponDamageCustomizer::TekRailgunDamageMultiplierToPlayer = WeaponDamageCustomizer::config["ToPlayer"]["TekRailgunDamageMultiplierToPlayer"];
}
void ReloadConfig(APlayerController* player_controller, FString*, bool)
{
	AShooterPlayerController* shooter_controller = static_cast<AShooterPlayerController*>(player_controller);

	try
	{
		ReadConfig();
	}
	catch (const std::exception& error)
	{
		ArkApi::GetApiUtils().SendServerMessage(shooter_controller, FColorList::Red, "Failed to reload config");

		Log::GetLog()->error(error.what());
		return;
	}

	ArkApi::GetApiUtils().SendServerMessage(shooter_controller, FColorList::Green, "Reloaded config");
}

void ReloadConfigRcon(RCONClientConnection* rcon_connection, RCONPacket* rcon_packet, UWorld*)
{
	FString reply;

	try
	{
		ReadConfig();
	}
	catch (const std::exception& error)
	{
		Log::GetLog()->error(error.what());

		reply = error.what();
		rcon_connection->SendMessageW(rcon_packet->Id, 0, &reply);
		return;
	}

	reply = "Reloaded config";
	rcon_connection->SendMessageW(rcon_packet->Id, 0, &reply);
}