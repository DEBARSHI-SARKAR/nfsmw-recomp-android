/* speed.exe 00513290 FUN_00513290; analysis pseudocode, not buildable source.
 * calls 0056f180 FUN_0056f180
 * calls 0058a9f0 FUN_0058a9f0
 * calls 00799130 FUN_00799130
 * calls 005910e0 FUN_005910e0
 * calls 007a9db0 FUN_007a9db0
 * calls 00591160 FUN_00591160
 * calls 00739a70 FUN_00739a70
 * calls 00796d30 FUN_00796d30
 * calls 0056dbe0 FUN_0056dbe0
 * calls 0056ecf0 FUN_0056ecf0
 */

void FUN_00513290(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_310 [784];
  
  iVar6 = -1;
  iVar2 = FUN_0056dbe0(0xb);
  iVar2 = *(int *)(iVar2 + 0x10);
  iVar5 = 0;
  do {
    piVar3 = (int *)FUN_0056ecf0(iVar5);
    if (((*piVar3 != -1) && (cVar1 = FUN_0056f180(0xf000f), cVar1 != '\0')) &&
       (cVar1 = FUN_0058a9f0(7,*piVar3,0), cVar1 != '\0')) {
      if (*piVar3 == iVar2) {
        return;
      }
      if (((iVar6 == -1) && (cVar1 = FUN_0056f180(0xf0001), cVar1 != '\0')) &&
         (iVar4 = FUN_00591160(), iVar4 == 0x7a145139)) {
        iVar6 = *piVar3;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 200);
  iVar2 = FUN_0056dbe0(0xb);
  *(int *)(iVar2 + 0x10) = iVar6;
  FUN_00739a70(0xffffffff,0,0,0);
  FUN_005910e0(iVar6,0,local_310);
  FUN_007a9db0(local_310,1,0);
  FUN_00796d30();
  FUN_00799130();
  return;
}

