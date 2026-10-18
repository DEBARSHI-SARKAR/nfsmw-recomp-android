/* speed.exe 005acdd0 FUN_005acdd0; analysis pseudocode, not buildable source.
 * calls 005acb70 FUN_005acb70
 */

void __thiscall FUN_005acdd0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 == 0) {
    FUN_005acb70(param_2,param_3,1,0);
    return;
  }
  FUN_005acb70(param_2,param_3,0,param_4);
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar1 + 0x80);
  *(undefined4 *)(iVar2 + 0x98) = *(undefined4 *)(iVar1 + 0x84);
  *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(iVar1 + 0x88);
  *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(iVar1 + 0x8c);
  *(undefined4 *)(iVar2 + 0xa4) = *(undefined4 *)(iVar1 + 0x90);
  return;
}

