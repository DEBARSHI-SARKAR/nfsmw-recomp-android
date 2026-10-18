/* speed.exe 00666aa0 FUN_00666aa0; analysis pseudocode, not buildable source.
 * calls 0064b3b0 FUN_0064b3b0
 * calls 0065fd30 FUN_0065fd30
 * calls 00666400 FUN_00666400
 * calls 006667c0 FUN_006667c0
 * calls 006616f0 FUN_006616f0
 * calls 00461970 FUN_00461970
 * calls 00768ca0 FUN_00768ca0
 * calls 004647c0 FUN_004647c0
 * calls 00461980 FUN_00461980
 * calls 00666390 FUN_00666390
 * calls 006661d0 FUN_006661d0
 * calls 0056b950 FUN_0056b950
 * calls 00659530 FUN_00659530
 * calls 004d1a10 FUN_004d1a10
 * calls 00728bf0 FUN_00728bf0
 * calls 006de200 FUN_006de200
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00666aa0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  while( true ) {
    uVar2 = FUN_00666390(*(undefined4 *)(param_1 + 4),0x1974ff09);
    *(undefined4 *)(param_1 + 4) = uVar2;
    if (DAT_00925e84 != '\0') {
      DAT_00925e84 = '\0';
    }
    _DAT_00925e8c = FUN_00666400(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4));
    if (DAT_00925e70 != 0) {
      DAT_00925e70 = 0;
    }
    DAT_00925e84 = '\x01';
    _DAT_00925e88 = "RegionLoader::LoadHandler";
    iVar3 = FUN_006661d0(*(undefined4 *)(param_1 + 4),0x1974ff09);
    if (iVar3 != -0x64ca01c6) {
      FUN_0056b950(1,0,1,0);
      iVar3 = FUN_0065fd30("Global\\InGameA.bun",3,0,0,0);
      *(int *)(param_1 + 8) = iVar3;
      *(undefined4 *)(iVar3 + 0x28) = 0x2000;
      uVar2 = FUN_00461970("Global\\InGameA.bun");
      *(undefined4 *)(iVar3 + 0x24) = uVar2;
      FUN_006616f0(0,0);
      *(undefined4 *)(param_1 + 0x10) = 0;
      if (((DAT_0091cf90[300] & 4U) != 0) && (*DAT_0091cf90 == '\x02')) {
        uVar2 = FUN_0065fd30("Global\\InGameSplitScreen.bun",3,0,0,0);
        FUN_006616f0(0,0);
        *(undefined4 *)(param_1 + 0x10) = uVar2;
      }
      iVar3 = FUN_0065fd30("GLOBAL\\INGAMEB.LZC",3,9,0,0);
      FUN_006616f0(&LAB_0064b390,param_1);
      *(int *)(param_1 + 0xc) = iVar3;
      FUN_00461980(*(undefined4 *)(iVar3 + 0x1c));
      uVar2 = FUN_00461970("GLOBAL\\INGAMEB.BUN");
      *(undefined4 *)(iVar3 + 0x1c) = uVar2;
      FUN_006de200();
      return;
    }
    iVar3 = FUN_006661d0(*(undefined4 *)(param_1 + 4),0xcda340f8);
    if (iVar3 != -0x64ca01c6) {
      FUN_004647c0(local_40,"TRACKS\\%s.BUN",DAT_009a3a20 + 0x40);
      uVar2 = FUN_00768ca0(local_40,local_20,0x20);
      FUN_0064b3b0(uVar2);
      uVar2 = FUN_0065fd30(local_20,4,1,0,0);
      FUN_006616f0(&LAB_0064b390,param_1);
      *(undefined4 *)(param_1 + 0x14) = uVar2;
      return;
    }
    iVar3 = FUN_006661d0(*(undefined4 *)(param_1 + 4),0xeff164cb);
    if (iVar3 != -0x64ca01c6) break;
    iVar3 = FUN_006661d0(*(undefined4 *)(param_1 + 4),0x98667b3e);
    if (iVar3 == -0x64ca01c6) {
      local_44 = 0x3b65db35;
      cVar1 = FUN_006667c0(local_48);
      if (cVar1 != '\0') {
        if (DAT_00925e84 != '\0') {
          DAT_00925e84 = '\0';
        }
        FUN_00659530();
      }
      return;
    }
  }
  FUN_00728bf0();
  FUN_004d1a10(&LAB_0064b390,param_1);
  return;
}

