/* speed.exe 0082a500 FUN_0082a500; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_0082a500(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0x800) || (0x2000 < param_2)) {
    return 0xfffffff8;
  }
  iVar1 = (**(code **)(*param_1 + 0x4c))();
  if (((iVar1 != param_2) && (-1 < param_2)) && (-1 < iVar1)) {
    return 0;
  }
  return 0xffffffff;
}

