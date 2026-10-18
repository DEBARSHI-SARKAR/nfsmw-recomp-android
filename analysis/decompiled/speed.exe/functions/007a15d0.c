/* speed.exe 007a15d0 FUN_007a15d0; analysis pseudocode, not buildable source.
 * calls 0078c380 FUN_0078c380
 * calls 0079f090 FUN_0079f090
 * calls 007a1310 FUN_007a1310
 * calls 0078a220 FUN_0078a220
 * calls 0079f690 FUN_0079f690
 */

void FUN_007a15d0(void)

{
  FUN_0078a220("m_messageTypeQuantizer",0,0xf);
  FUN_0078a220("m_driverNumberQuantizer",0,3);
  FUN_0078a220("m_driverNumberQuantizer",0,0xf);
  if (DAT_009b416c != 0) {
    FUN_007a1310();
    return;
  }
  FUN_0079f690();
  FUN_0079f090();
  DAT_009b4218 = FUN_0078c380(0);
  DAT_009b41fc = 2;
  return;
}

