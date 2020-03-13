
#include "AsteroKreog.hpp"
#include "DeepCoreMiner.hpp"
#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"
#include "KoalaSteroid.hpp"
#include "MiningBarge.hpp"
#include "StripMiner.hpp"

int main()
{

	MiningBarge nemu;

	IMiningLaser *strip = new StripMiner();
	IMiningLaser *deep = new DeepCoreMiner();

	nemu.equip(strip);
	nemu.equip(deep);
	nemu.equip(strip);
	nemu.equip(deep);

	IAsteroid *koa = new KoalaSteroid();
	IAsteroid *as = new AsteroKreog();
	puts("\n");
	puts("---------MINE KOALA-------\n");
	nemu.mine(koa);
	puts("\n");
	puts("---------MINE ASTERO-------\n");
	nemu.mine(as);

	delete strip;
	delete deep;
	delete koa;
	delete as;
	return 0;

}