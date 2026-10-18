/* speed.exe 007153b0 FUN_007153b0; analysis pseudocode, not buildable source.
 * calls 00713850 FUN_00713850
 * calls 007124f0 FUN_007124f0
 * calls 0045da30 FUN_0045da30
 * calls 00712180 FUN_00712180
 * calls 00713750 FUN_00713750
 * calls 005d0370 FUN_005d0370
 */

/* WARNING: Removing unreachable block (ram,0x00715531) */
/* WARNING: Removing unreachable block (ram,0x0071553f) */
/* WARNING: Removing unreachable block (ram,0x00715549) */
/* WARNING: Removing unreachable block (ram,0x00715550) */
/* WARNING: Removing unreachable block (ram,0x00715573) */
/* WARNING: Removing unreachable block (ram,0x00715581) */
/* WARNING: Removing unreachable block (ram,0x0071558b) */
/* WARNING: Removing unreachable block (ram,0x007154c4) */
/* WARNING: Removing unreachable block (ram,0x007154ca) */
/* WARNING: Removing unreachable block (ram,0x007154cd) */
/* WARNING: Removing unreachable block (ram,0x007154d4) */
/* WARNING: Removing unreachable block (ram,0x007154e6) */
/* WARNING: Removing unreachable block (ram,0x007154ed) */
/* WARNING: Removing unreachable block (ram,0x007154ff) */
/* WARNING: Removing unreachable block (ram,0x0071559a) */
/* WARNING: Removing unreachable block (ram,0x007155a7) */
/* WARNING: Removing unreachable block (ram,0x007155b3) */
/* WARNING: Removing unreachable block (ram,0x0071549f) */
/* WARNING: Removing unreachable block (ram,0x007154bf) */
/* WARNING: Removing unreachable block (ram,0x007154a9) */
/* WARNING: Removing unreachable block (ram,0x007154c2) */
/* WARNING: Removing unreachable block (ram,0x00715506) */
/* WARNING: Removing unreachable block (ram,0x00715552) */
/* WARNING: Removing unreachable block (ram,0x00715509) */
/* WARNING: Removing unreachable block (ram,0x00715510) */
/* WARNING: Removing unreachable block (ram,0x00715592) */
/* WARNING: Removing unreachable block (ram,0x007155cd) */
/* WARNING: Removing unreachable block (ram,0x00715454) */
/* WARNING: Removing unreachable block (ram,0x0071546f) */
/* WARNING: Removing unreachable block (ram,0x007154ae) */
/* WARNING: Removing unreachable block (ram,0x007155d4) */

undefined4 __thiscall FUN_007153b0(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00880168;
  pvStack_c = ExceptionList;
  local_4 = 0;
  if (*(int *)(param_1 + 0x5c) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 3;
  }
  ExceptionList = &pvStack_c;
  FUN_00712180(iVar4);
  iVar4 = *(int *)(param_1 + 0x5c);
  if (iVar4 != *(int *)(param_1 + 0x60)) {
    cVar2 = (char)param_3;
    do {
      piVar1 = *(int **)(iVar4 + 4);
      param_3 = piVar1;
      cVar3 = (**(code **)(*piVar1 + 0x60))();
      if ((cVar3 != '\0') &&
         ((cVar2 == '\0' || (cVar3 = (**(code **)(*piVar1 + 0x70))(), cVar3 != '\0')))) {
        FUN_00713750(&param_3);
      }
      iVar4 = iVar4 + 8;
    } while (iVar4 != *(int *)(param_1 + 0x60));
  }
  ExceptionList = pvStack_c;
  return 0;
}

