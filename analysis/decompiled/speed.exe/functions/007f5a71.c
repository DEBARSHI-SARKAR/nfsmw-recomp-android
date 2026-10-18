/* speed.exe 007f5a71 FUN_007f5a71; analysis pseudocode, not buildable source.
 * calls 007f5e04 FUN_007f5e04
 * calls 007f41b3 FUN_007f41b3
 */

void __thiscall
FUN_007f5a71(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[1] = 0x1b;
  param_1[4] = param_2;
  uVar1 = FUN_007f5e04(param_2,&DAT_008c2508,param_3);
  param_1[5] = uVar1;
  FUN_007f41b3(param_4);
  return;
}

