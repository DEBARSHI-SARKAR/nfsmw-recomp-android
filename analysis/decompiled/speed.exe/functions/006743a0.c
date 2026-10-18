/* speed.exe 006743a0 FUN_006743a0; analysis pseudocode, not buildable source.
 */

undefined4 * __fastcall FUN_006743a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar2 = param_1 + 4;
  iVar3 = 0x60;
  do {
    *puVar2 = 0;
    puVar2[1] = 0xffffffff;
    puVar4 = puVar2 + 2;
    puVar2 = puVar2 + 0x42;
    iVar3 = iVar3 + -1;
    for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  } while (iVar3 != 0);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0xffffffff;
  param_1[3] = 0x60;
  return param_1;
}

