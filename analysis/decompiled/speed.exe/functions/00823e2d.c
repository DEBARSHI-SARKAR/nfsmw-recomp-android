/* speed.exe 00823e2d FUN_00823e2d; analysis pseudocode, not buildable source.
 */

int FUN_00823e2d(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < (int)(uint)*(ushort *)(param_1 + 6)) {
    iVar1 = param_2 * 4 + 0x14;
    iVar2 = *(int *)(iVar1 + param_1);
    if (iVar2 != 0) {
      return iVar1 + iVar2 + param_1;
    }
  }
  return 0;
}

