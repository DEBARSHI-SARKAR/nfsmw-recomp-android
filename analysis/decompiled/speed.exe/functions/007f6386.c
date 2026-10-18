/* speed.exe 007f6386 FUN_007f6386; analysis pseudocode, not buildable source.
 */

bool __thiscall FUN_007f6386(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  bVar2 = false;
  if (iVar1 == 2) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    else {
      bVar2 = true;
    }
  }
  else if (iVar1 == 3) {
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = iVar1 != param_2;
  }
  return bVar2;
}

