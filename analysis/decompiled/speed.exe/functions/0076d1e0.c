/* speed.exe 0076d1e0 FUN_0076d1e0; analysis pseudocode, not buildable source.
 * calls 0045f1c0 FUN_0045f1c0
 * calls 007c4b80 FUN_007c4b80
 */

int __thiscall FUN_0076d1e0(int param_1,int param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = FUN_0045f1c0(param_2);
  }
  *(undefined2 *)(param_1 + 8) = uVar1;
  *(undefined2 *)(param_1 + 10) = param_4;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_3 + 0xc);
  uVar1 = FUN_007c4b80();
  *(undefined2 *)(param_1 + 0xe) = uVar1;
  uVar1 = FUN_007c4b80();
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  return param_1;
}

