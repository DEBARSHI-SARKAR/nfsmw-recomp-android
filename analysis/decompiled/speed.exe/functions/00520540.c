/* speed.exe 00520540 FUN_00520540; analysis pseudocode, not buildable source.
 * calls 00598970 FUN_00598970
 * calls 00516be0 FUN_00516be0
 * calls 0056bc10 FUN_0056bc10
 * calls 0056c6e0 FUN_0056c6e0
 */

void FUN_00520540(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_0056c6e0(*(undefined4 *)(param_2 + 0x124));
  *(undefined4 *)(param_2 + 0x124) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    uVar2 = FUN_0056bc10(0x6a4ec4ab);
    FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,uVar2);
  }
  FUN_00516be0(0xaf0bbd92,*(undefined4 *)(param_2 + 0x10),0xffffffff,0xff);
  return;
}

