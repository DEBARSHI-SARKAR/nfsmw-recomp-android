/* speed.exe 0072efa0 FUN_0072efa0; analysis pseudocode, not buildable source.
 * calls 0072b780 FUN_0072b780
 * calls 0072b2f0 FUN_0072b2f0
 * calls 0045fba0 FUN_0045fba0
 * calls 0072edb0 FUN_0072edb0
 */

int __thiscall
FUN_0072efa0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x30) = param_5;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  uVar1 = *param_3;
  uVar2 = param_3[2];
  *(undefined4 *)(param_1 + 0x44) = param_3[1];
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  FUN_0045fba0(param_1 + 0x60,param_1 + 0x50,param_3);
  uVar2 = param_3[2];
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x104) = param_3[1];
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  uVar2 = FUN_0072edb0(param_3);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = FUN_0072b2f0(param_1);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  FUN_0072b780(param_3,param_4,0,param_6);
  return param_1;
}

