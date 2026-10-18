/* speed.exe 008448f0 FUN_008448f0; analysis pseudocode, not buildable source.
 * calls 0078af20 thunk_FUN_004655f0
 * calls 00852cf0 FUN_00852cf0
 * calls 0083e360 FUN_0083e360
 */

void __fastcall FUN_008448f0(int param_1)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)(param_1 + in_EAX * 0x14);
  if (*piVar1 != 0) {
    iVar2 = FUN_00852cf0(*piVar1);
    while (iVar2 != 0) {
      uVar3 = FUN_0083e360(piVar1[1],iVar2);
      thunk_FUN_004655f0(uVar3);
      iVar2 = FUN_00852cf0(*piVar1);
    }
  }
  return;
}

