/* speed.exe 007a60e0 FUN_007a60e0; analysis pseudocode, not buildable source.
 * calls 00575b10 FUN_00575b10
 * calls 00516e10 FUN_00516e10
 * calls 00575b00 FUN_00575b00
 * calls 00516e30 FUN_00516e30
 * calls 00525940 FUN_00525940
 */

void FUN_007a60e0(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00575b00();
  if (cVar1 != '\0') {
    FUN_00575b10(0);
    uVar2 = 3;
    FUN_00516e10(3);
    FUN_00516e30(uVar2);
  }
  FUN_00525940(PTR_s_CustomizeMain_fng_00905ea4,0,0,0);
  return;
}

