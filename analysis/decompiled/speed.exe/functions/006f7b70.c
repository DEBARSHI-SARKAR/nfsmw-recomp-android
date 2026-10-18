/* speed.exe 006f7b70 FUN_006f7b70; analysis pseudocode, not buildable source.
 * calls 006f4260 FUN_006f4260
 */

void __fastcall FUN_006f7b70(int param_1)

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
    FUN_006f4260(iVar1,uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}

