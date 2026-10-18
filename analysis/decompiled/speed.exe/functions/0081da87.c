/* speed.exe 0081da87 FUN_0081da87; analysis pseudocode, not buildable source.
 * calls 00822428 FUN_00822428
 * calls 0081d93a FUN_0081d93a
 */

undefined4 __thiscall FUN_0081da87(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_0081d93a();
  }
  uVar1 = FUN_00822428(param_1,param_2);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return 0;
}

