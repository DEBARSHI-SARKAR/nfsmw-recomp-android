/* speed.exe 0086233d FUN_0086233d; analysis pseudocode, not buildable source.
 * calls 00862307 FUN_00862307
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 */

void FUN_0086233d(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  
  FUN_007ec1bd();
  pcVar1 = (code *)unaff_ESI[6];
  iVar2 = unaff_ESI[4];
  iVar3 = unaff_ESI[3];
  unaff_ESI[7] = 0;
  FUN_007ec1c8();
  if (iVar2 == 0) {
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*unaff_ESI);
    }
  }
  else if (iVar3 == 0) {
    FUN_00862307();
    return;
  }
  return;
}

