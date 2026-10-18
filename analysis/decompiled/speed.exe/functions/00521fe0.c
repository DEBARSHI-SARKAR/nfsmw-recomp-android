/* speed.exe 00521fe0 FUN_00521fe0; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 * calls 00586d90 FUN_00586d90
 * calls 0056bc10 FUN_0056bc10
 * calls 00598bb0 FUN_00598bb0
 * calls 00460d20 FUN_00460d20
 */

void __fastcall FUN_00521fe0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00586d90();
  if (iVar1 != 0) {
    uVar2 = FUN_00586d90(&DAT_00890978);
    iVar1 = FUN_00460d20(uVar2);
    if (iVar1 != 0) {
      if (*(char *)(DAT_0091cf90 + 0x141) == '\x01') {
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        uVar3 = FUN_0056bc10(0xd157c200);
        uVar2 = FUN_00598bb0(uVar2,&DAT_00890978,1,0x1a294dad,0x417b2601,0xffffffff,0x59337816,0,1,
                             uVar3);
        *(undefined4 *)(param_1 + 0x19c) = uVar2;
        return;
      }
      if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0) {
        FUN_00516be0(0x59337816,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
        return;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = FUN_0056bc10(0xd157c200);
      FUN_00598bb0(uVar2,&DAT_00890978,1,0x1a294dad,0x417b2601,0xffffffff,0x59337816,0,1,uVar3);
    }
  }
  return;
}

