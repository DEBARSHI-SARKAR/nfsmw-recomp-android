/* speed.exe 00662b30 FUN_00662b30; analysis pseudocode, not buildable source.
 * calls 007ec298 FUN_007ec298
 * calls 0065fd30 FUN_0065fd30
 * calls 006616f0 FUN_006616f0
 * calls 006626b0 FUN_006626b0
 */

void FUN_00662b30(void)

{
  FUN_0065fd30("GLOBAL\\GLOBALA.BUN",1,0,0,0);
  FUN_006616f0(0,0);
  while( true ) {
    FUN_006626b0();
    if ((DAT_00925858 == 0) && (DAT_0092585c == 0)) break;
    FUN_007ec298(8);
  }
  return;
}

