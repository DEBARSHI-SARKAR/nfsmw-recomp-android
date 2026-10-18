/* speed.exe 006f34e0 FUN_006f34e0; analysis pseudocode, not buildable source.
 * calls 006f0210 FUN_006f0210
 * calls 005d59f0 FUN_005d59f0
 * calls 006f01e0 FUN_006f01e0
 * calls 006f0240 FUN_006f0240
 */

undefined4 FUN_006f34e0(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (in_EAX == (int *)0x0) {
    return 0;
  }
  iVar2 = FUN_005d59f0(&LAB_00620fe0);
  if ((iVar2 != 0) || (iVar2 = FUN_005d59f0(&LAB_00668430), iVar2 != 0)) {
    return 1;
  }
  cVar1 = (**(code **)(*in_EAX + 0x54))();
  if ((cVar1 != '\0') || (piVar3 = (int *)(**(code **)(*in_EAX + 0x50))(), piVar3 == (int *)0x0)) {
    return 0;
  }
  cVar1 = FUN_006f01e0(piVar3);
  if (cVar1 != '\0') {
    return 1;
  }
  uVar4 = (**(code **)(*piVar3 + 0x20))();
  cVar1 = FUN_006f0240(uVar4);
  if (cVar1 != '\0') {
    return 1;
  }
  cVar1 = FUN_006f0210(piVar3);
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}

