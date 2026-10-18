/* speed.exe 0085bbb0 FUN_0085bbb0; analysis pseudocode, not buildable source.
 * calls 00846010 FUN_00846010
 */

void __fastcall FUN_0085bbb0(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_2;
  for (iVar1 = 0x2c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_2;
  for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  param_2[0x2a] = 0xffffffff;
  *(undefined2 *)(param_2 + 0x23) = *(undefined2 *)(param_3 + 0x28);
  *(undefined2 *)(param_2 + 0x25) = 6000;
  FUN_00846010(param_2 + 0x1a,0x20,"$%08x$%08x",*param_2,param_2[1]);
  return;
}

