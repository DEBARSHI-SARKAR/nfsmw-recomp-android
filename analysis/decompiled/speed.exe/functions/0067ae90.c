/* speed.exe 0067ae90 FUN_0067ae90; analysis pseudocode, not buildable source.
 * calls 0067ad40 FUN_0067ad40
 */

void __fastcall FUN_0067ae90(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1 + -8;
    }
    FUN_0067ad40(iVar1,uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  return;
}

