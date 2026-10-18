/* speed.exe 007f2b11 FUN_007f2b11; analysis pseudocode, not buildable source.
 * calls 007f1a47 FUN_007f1a47
 */

undefined4 __thiscall FUN_007f2b11(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if ((*(byte *)(param_1 + 0x228) & 2) == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_007f1a47();
    *(undefined4 *)(param_1 + 0x498) = piVar2;
    (**(code **)(*piVar2 + 0x1c))(param_1,param_2);
    uVar1 = *(undefined4 *)(param_1 + 0x498);
  }
  return uVar1;
}

