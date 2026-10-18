/* speed.exe 00522700 FUN_00522700; analysis pseudocode, not buildable source.
 * calls 00598970 FUN_00598970
 * calls 0056bc10 FUN_0056bc10
 */

void __fastcall FUN_00522700(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((((DAT_0091ca85 == '\0') || (*DAT_0091cadc == 0)) ||
      (*(char *)(*DAT_0091cadc + 0x524c) == '\0')) && (DAT_008f32fc == '\0')) {
    DAT_008f32fc = '\x01';
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = FUN_0056bc10(0x4b5c9721);
    FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,0xd828e52c,0xd828e52c,uVar2);
  }
  return;
}

