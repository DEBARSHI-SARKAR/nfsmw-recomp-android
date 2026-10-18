/* speed.exe 007a6f70 FUN_007a6f70; analysis pseudocode, not buildable source.
 * calls 00588250 FUN_00588250
 * calls 0045d3a0 FUN_0045d3a0
 */

int __thiscall FUN_007a6f70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0045d3a0(0);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_00588250(iVar3);
      if (*(int *)(*(int *)(iVar2 + 0x18) + 0xc) == *(int *)(param_2 + 0xc)) {
        *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(iVar2 + 0x18);
        return param_1 + 0x1cc;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}

