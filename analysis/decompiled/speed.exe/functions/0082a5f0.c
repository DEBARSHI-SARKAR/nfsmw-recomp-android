/* speed.exe 0082a5f0 FUN_0082a5f0; analysis pseudocode, not buildable source.
 * calls 00829480 FUN_00829480
 * calls 0082a280 FUN_0082a280
 */

undefined4 * __thiscall FUN_0082a5f0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_0082a280();
  *param_1 = &PTR_FUN_008c5e98;
  param_1[0x42] = 0xffffffff;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0xffffffff;
  puVar1 = (undefined4 *)FUN_00829480(param_2 * 0x28);
  param_1[0x1a] = puVar1;
  for (iVar3 = (param_2 * 5 & 0x1fffffffU) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  if (0 < param_2) {
    iVar2 = 0;
    iVar3 = param_2;
    do {
      *(undefined4 *)(iVar2 + 0x10 + param_1[0x1a]) = 0xffffffff;
      iVar2 = iVar2 + 0x28;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[0x19] = param_2;
  return param_1;
}

