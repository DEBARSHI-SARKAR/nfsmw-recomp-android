/* speed.exe 0053d6d0 FUN_0053d6d0; analysis pseudocode, not buildable source.
 * calls 0056bc10 FUN_0056bc10
 * calls 00598970 FUN_00598970
 * calls 0056c6e0 FUN_0056c6e0
 * calls 0053d1d0 FUN_0053d1d0
 */

void FUN_0053d6d0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_0056c6e0(*(undefined4 *)(param_2 + 0x2c));
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined1 *)(DAT_0091cae0 + 1) = 1;
  *(undefined4 *)(param_2 + 0x27c) = 0xffffffff;
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_0053d1d0();
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  uVar2 = FUN_0056bc10(0x6cf6e689);
  FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,0x911ab364,0x911ab364,uVar2);
  return;
}

