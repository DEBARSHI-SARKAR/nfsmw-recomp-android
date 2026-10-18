/* speed.exe 004512d0 FUN_004512d0; analysis pseudocode, not buildable source.
 */

undefined2 __thiscall FUN_004512d0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0xb) >> 4 & 1;
  if ((bVar1 == 0) && (*(int *)(param_1 + 4) == param_1)) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xb) & 2) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    if (bVar1 != 0) {
      iVar2 = iVar2 + param_2;
    }
    return *(undefined2 *)(iVar2 + 2);
  }
  return 1;
}

