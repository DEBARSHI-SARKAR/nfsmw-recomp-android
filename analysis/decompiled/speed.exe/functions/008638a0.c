/* speed.exe 008638a0 FUN_008638a0; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 008630d0 FUN_008630d0
 * calls 0084af40 FUN_0084af40
 * calls 00863260 FUN_00863260
 * calls 0084af90 FUN_0084af90
 * calls 0084b650 FUN_0084b650
 */

undefined4 FUN_008638a0(char *param_1,int param_2)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  int iVar3;
  DWORD DVar4;
  int *unaff_ESI;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (0xff < (uint)((int)pcVar2 - (int)(param_1 + 1))) {
    return 0xffffffff;
  }
  pcVar2 = in_EAX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((char *)unaff_ESI[0x4d] < pcVar2 + (1 - (int)(in_EAX + 1))) {
    return 0xfffffffe;
  }
  iVar3 = FUN_008630d0();
  if ((iVar3 != 0) || (param_2 != unaff_ESI[0x44])) {
    if (*unaff_ESI != 0) {
      FUN_0084af90(*unaff_ESI,2);
      FUN_0084af40(*unaff_ESI);
    }
    *unaff_ESI = 0;
    unaff_ESI[0x45] = 0;
  }
  if ((unaff_ESI[0x45] == 7) && (unaff_ESI[0x49] == 0)) {
    if (*unaff_ESI != 0) goto LAB_0086397b;
  }
  else if (*unaff_ESI != 0) {
    FUN_0084af90(*unaff_ESI,2);
    FUN_0084af40(*unaff_ESI);
  }
  *unaff_ESI = 0;
  unaff_ESI[0x45] = 0;
LAB_0086397b:
  pcVar2 = (char *)unaff_ESI[0x4c];
  do {
    cVar1 = *in_EAX;
    in_EAX = in_EAX + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  unaff_ESI[0x51] = 3;
  DVar4 = GetTickCount();
  unaff_ESI[0x53] = DVar4 + unaff_ESI[0x52];
  unaff_ESI[0x54] = 0;
  if (((unaff_ESI[0x45] == 7) && (iVar3 = FUN_008630d0(), iVar3 == 0)) &&
     (param_2 == unaff_ESI[0x44])) {
    unaff_ESI[0x45] = 3;
  }
  else {
    iVar3 = (int)(unaff_ESI + 3) - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar3] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    unaff_ESI[0x44] = param_2;
    iVar3 = FUN_0084b650(unaff_ESI + 3,0x1e);
    unaff_ESI[1] = iVar3;
    unaff_ESI[0x43] = 0;
    unaff_ESI[0x45] = 1;
  }
  unaff_ESI[0x47] = 0;
  FUN_00863260();
  return 0;
}

