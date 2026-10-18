/* speed.exe 004aefe0 FUN_004aefe0; analysis pseudocode, not buildable source.
 * calls 00405da0 FUN_00405da0
 * calls 0065faf0 FUN_0065faf0
 * calls 005cc240 FUN_005cc240
 */

void FUN_004aefe0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_005cc240("Pathfinder5");
  iVar2 = FUN_00405da0(1,0,0,0);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  FUN_0065faf0();
  return;
}

