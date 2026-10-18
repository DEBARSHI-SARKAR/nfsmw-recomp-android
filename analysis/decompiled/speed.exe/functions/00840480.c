/* speed.exe 00840480 FUN_00840480; analysis pseudocode, not buildable source.
 * calls 00852440 FUN_00852440
 * calls 00852430 GetTickCount
 * calls 00851aa0 FUN_00851aa0
 * calls 008519e0 FUN_008519e0
 * calls 00851bd0 FUN_00851bd0
 */

void FUN_00840480(void)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  undefined4 *unaff_ESI;
  
  cVar1 = *(char *)(unaff_ESI + 0x82e);
  puVar4 = (undefined4 *)((int)unaff_ESI + 0x20b9);
  if (cVar1 != '*') {
    puVar4 = unaff_ESI + 0x82e;
  }
  FUN_00851aa0(*unaff_ESI);
  if (cVar1 == '*') {
    iVar2 = FUN_008519e0(*unaff_ESI,0x63727970);
    if (iVar2 == 0) {
      FUN_00852440(*unaff_ESI,puVar4,0,unaff_ESI[0x610] + 1);
      FUN_00851bd0(*unaff_ESI,1);
      goto LAB_008404fd;
    }
  }
  FUN_00852440(*unaff_ESI,puVar4,0,unaff_ESI[0x610]);
LAB_008404fd:
  unaff_ESI[2] = 0x72646972;
  DVar3 = GetTickCount();
  unaff_ESI[5] = DVar3 + unaff_ESI[0xb];
  unaff_ESI[6] = 0;
  return;
}

