/* speed.exe 0059b0a0 FUN_0059b0a0; analysis pseudocode, not buildable source.
 * calls 0056bb80 FUN_0056bb80
 * calls 005985c0 FUN_005985c0
 * calls 00598970 FUN_00598970
 */

void __thiscall FUN_0059b0a0(int param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    DAT_0091d26c = FUN_005985c0(*(undefined4 *)(param_1 + 0x10),"animating",0,0x984b3ecb,
                                &DAT_0091c39c);
    return;
  }
  iVar1 = FUN_0056bb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0056bb80();
  }
  FUN_00598970(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,
               iVar1);
  return;
}

