/* speed.exe 0074b640 FUN_0074b640; analysis pseudocode, not buildable source.
 * calls 0074b5c0 FUN_0074b5c0
 */

void __thiscall FUN_0074b640(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = FUN_0074b5c0(param_2,param_3);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

