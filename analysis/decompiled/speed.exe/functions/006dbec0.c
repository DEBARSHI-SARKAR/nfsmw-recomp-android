/* speed.exe 006dbec0 FUN_006dbec0; analysis pseudocode, not buildable source.
 * calls 006d2cd0 FUN_006d2cd0
 */

void FUN_006dbec0(void)

{
  if (((DAT_00901828 == 0) && (DAT_00982b2a == '\0')) && (DAT_009017d0 == 0)) {
    (**(code **)(*DAT_00982bdc + 0x88))(DAT_00982bdc,DAT_00982a28,0,DAT_00982990,0,0);
    FUN_006d2cd0(DAT_00982998,DAT_00982964,1,&DAT_008f94f4,3);
    DAT_00982c60 = 0xffffffff;
  }
  else {
    (**(code **)(*DAT_00982bdc + 0x88))(DAT_00982bdc,DAT_00982a28,0,DAT_0093de60,0,0);
    DAT_00982c60 = 0;
    if ((DAT_00901828 != 0) || (DAT_00982b26 != '\0')) {
      (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xa8,0xf);
      if (DAT_00901828 != 0) {
        FUN_006d2cd0(DAT_00982990,DAT_0093def8,4,&DAT_008f9560,2);
      }
      if (DAT_00982b26 != '\0') {
        FUN_006d2cd0(DAT_00982998,DAT_0093def8,4,&DAT_008f9560,3);
      }
    }
  }
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xa8,7);
  return;
}

