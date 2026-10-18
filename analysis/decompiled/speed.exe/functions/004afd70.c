/* speed.exe 004afd70 FUN_004afd70; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004afd70(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar2 = param_3[1];
  uVar1 = param_3[2];
  *(undefined4 *)(param_1 + 0x20) = *param_3;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar2 = param_4[1];
  uVar1 = param_4[2];
  *(undefined4 *)(param_1 + 0x30) = *param_4;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = param_5;
  uVar2 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0xd4) = uVar2;
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  *(undefined4 *)(param_1 + 0xa0) = *param_2;
  *(undefined4 *)(param_1 + 0xa4) = uVar2;
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = DAT_00925ae8;
  return;
}

