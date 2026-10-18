/* speed.exe 005fa5e0 FUN_005fa5e0; analysis pseudocode, not buildable source.
 * calls 004647c0 FUN_004647c0
 * calls 005fa520 FUN_005fa520
 * calls 005e9930 FUN_005e9930
 * calls 0064ae60 FUN_0064ae60
 * calls 00664010 FUN_00664010
 * calls 005d29d0 FUN_005d29d0
 * calls 00663f40 FUN_00663f40
 */

int __thiscall FUN_005fa5e0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  FUN_004647c0(local_100,"%s.bin",param_1[1]);
  FUN_004647c0(local_80,"%s.vlt",param_1[1]);
  param_1[0xf] = param_1[9] + param_1[5] + param_2;
  param_1[0xb] = param_1[5] + param_2;
  puVar1 = (undefined4 *)FUN_005d29d0(0x24,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar2 = param_1[10];
    uVar3 = param_1[9];
    puVar1[6] = param_1[0xb];
    puVar1[1] = 0xea0ff1ce;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = &PTR_LAB_008a3a30;
    puVar1[7] = uVar3;
    puVar1[8] = uVar2;
  }
  uVar2 = FUN_0064ae60(puVar1);
  FUN_00663f40(local_100,param_2,param_1[5]);
  uVar3 = FUN_00664010(local_80,param_3,param_1[7]);
  *param_1 = uVar3;
  param_1[8] = puVar1;
  FUN_0064ae60(uVar2);
  if (*(char *)(DAT_0091e00c + 0x118) != '\0') {
    FUN_005fa520();
  }
  FUN_005e9930(param_1);
  return param_1[0xc] + param_1[5] + param_1[9];
}

