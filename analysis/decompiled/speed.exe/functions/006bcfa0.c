/* speed.exe 006bcfa0 FUN_006bcfa0; analysis pseudocode, not buildable source.
 */

void FUN_006bcfa0(void)

{
  (**(code **)(*DAT_00982bdc + 0x5c))
            (DAT_00982bdc,DAT_008f9008,DAT_008f900c,1,1,DAT_008f9000,0,&DAT_00982a7c,0);
  (**(code **)(*DAT_00982a7c + 0x48))(DAT_00982a7c,0,&DAT_00982a80);
  (**(code **)(*DAT_00982bdc + 0x74))
            (DAT_00982bdc,DAT_008f9008,DAT_008f900c,DAT_008f9004,0,0,0,&DAT_00982a84,0);
  if (0 < DAT_00982b18) {
    (**(code **)(*DAT_00982bdc + 0x5c))(DAT_00982bdc,0x140,200,1,1,DAT_008f9000,0,&DAT_00982a14,0);
    (**(code **)(*DAT_00982a14 + 0x48))(DAT_00982a14,0,&DAT_00982a18);
  }
  return;
}

