/* speed.exe 007fa2b8 FUN_007fa2b8; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_007fa2b8(int param_1,int param_2)

{
  int *piVar1;
  
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  piVar1 = (int *)(*DAT_00909e54)("MyAllocator::Alloc",param_2 + 4,0,4,DAT_00909e5c);
  *piVar1 = param_2;
  return piVar1 + 1;
}

