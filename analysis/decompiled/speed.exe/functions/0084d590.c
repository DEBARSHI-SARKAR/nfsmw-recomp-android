/* speed.exe 0084d590 FUN_0084d590; analysis pseudocode, not buildable source.
 * calls 0084d4e0 FUN_0084d4e0
 * calls 008582e0 FUN_008582e0
 * calls 00858180 FUN_00858180
 * calls 008620e6 lineClose
 * calls 00857da0 FUN_00857da0
 * calls 007d6cb0 __security_check_cookie
 * calls 00858270 FUN_00858270
 * calls 008620f8 lineAnswer
 * calls 0084d460 FUN_0084d460
 * calls EXTERNAL:000000c3 wsprintfA
 * calls 0084d3e0 FUN_0084d3e0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0084d590(HCALL param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  bool bVar4;
  CHAR local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (param_2 != 2) {
    return;
  }
  if (param_4 != 0x4000) {
    if (param_4 == 2) {
      if ((*(int *)(param_3 + 0x94) != 4) && (*(int *)(param_3 + 0x94) != 7)) {
        return;
      }
      *(HCALL *)(param_3 + 0x90) = param_1;
      LVar3 = lineAnswer(param_1,(LPCSTR)0x0,0);
      *(LONG *)(param_3 + 0x98) = LVar3;
      bVar4 = LVar3 == 0;
    }
    else {
      bVar4 = param_4 == 0x100;
    }
    if (!bVar4) {
      return;
    }
    iVar2 = *(int *)(param_3 + 0x94);
    if ((iVar2 == 4) || (iVar2 == 3)) {
      iVar2 = FUN_0084d460(*(undefined4 *)(param_3 + 0x8c));
      if (iVar2 != -1) {
        wsprintfA(local_104,"TAPI%d:",iVar2);
        if (*(int *)(param_3 + 0x94) == 3) {
          FUN_00858270(*(undefined4 *)(param_3 + 0x7c),local_104);
          *(undefined4 *)(param_3 + 0x94) = 5;
          return;
        }
        FUN_00858180(*(undefined4 *)(param_3 + 0x7c),local_104);
        *(undefined4 *)(param_3 + 0x94) = 5;
        return;
      }
    }
    else {
      if ((iVar2 != 7) && (iVar2 != 6)) {
        return;
      }
      iVar2 = FUN_0084d460(*(undefined4 *)(param_3 + 0x8c));
      if (iVar2 != -1) {
        wsprintfA(local_104,"TAPI%d:",iVar2);
        FUN_00857da0(*(undefined4 *)(param_3 + 0x7c),local_104);
        *(undefined4 *)(param_3 + 0x94) = 5;
        return;
      }
    }
    if (*(HLINE *)(param_3 + 0x8c) != 0xffffffff) {
      lineClose(*(HLINE *)(param_3 + 0x8c));
    }
    *(undefined4 *)(param_3 + 0x8c) = 0xffffffff;
    *(undefined4 *)(param_3 + 0x94) = 8;
    return;
  }
  if (*(int *)(param_3 + 0x94) == 4) {
    lineClose(*(HLINE *)(param_3 + 0x8c));
    *(undefined4 *)(param_3 + 0x8c) = 0xffffffff;
    FUN_0084d3e0((undefined4 *)(param_3 + 0x8c),param_3,4,0x10);
    return;
  }
  if (*(int *)(param_3 + 0x94) == 3) {
    puVar1 = (undefined4 *)(param_3 + 0x8c);
    lineClose(*(HLINE *)(param_3 + 0x8c));
    *puVar1 = 0xffffffff;
    iVar2 = FUN_0084d3e0(puVar1,param_3,1,0x10);
    if (iVar2 != 0) goto LAB_0084d702;
    iVar2 = FUN_0084d4e0(*puVar1,param_3 + 0x90,0);
    *(int *)(param_3 + 0x98) = iVar2;
    if (0 < iVar2) goto LAB_0084d68a;
  }
  else {
LAB_0084d68a:
    if (*(int *)(param_3 + 0x94) != 5) {
      return;
    }
    iVar2 = FUN_008582e0(*(undefined4 *)(param_3 + 0x7c));
    if ((iVar2 == 3) && (*(char *)(param_3 + 0x9c) == '\0')) {
      *(undefined4 *)(param_3 + 0x94) = 7;
      FUN_00857da0(*(undefined4 *)(param_3 + 0x7c),0);
      lineClose(*(HLINE *)(param_3 + 0x8c));
      *(undefined4 *)(param_3 + 0x8c) = 0xffffffff;
      iVar2 = FUN_0084d3e0((undefined4 *)(param_3 + 0x8c),param_3,4,0x10);
      if (iVar2 == 0) {
        return;
      }
      goto LAB_0084d702;
    }
    if (*(int *)(param_3 + 0x94) != 5) {
      return;
    }
    iVar2 = FUN_008582e0(*(undefined4 *)(param_3 + 0x7c));
    if (iVar2 != 3) {
      return;
    }
    if (*(char *)(param_3 + 0x9c) == '\0') {
      return;
    }
    *(undefined4 *)(param_3 + 0x94) = 6;
    FUN_00857da0(*(undefined4 *)(param_3 + 0x7c),0);
    puVar1 = (undefined4 *)(param_3 + 0x8c);
    lineClose(*(HLINE *)(param_3 + 0x8c));
    *puVar1 = 0xffffffff;
    iVar2 = FUN_0084d3e0(puVar1,param_3,1,0x10);
    if (iVar2 != 0) goto LAB_0084d702;
    iVar2 = FUN_0084d4e0(*puVar1,param_3 + 0x90,0);
    *(int *)(param_3 + 0x98) = iVar2;
    if (0 < iVar2) {
      return;
    }
  }
  lineClose(*(HLINE *)(param_3 + 0x8c));
  *(HLINE *)(param_3 + 0x8c) = 0xffffffff;
LAB_0084d702:
  *(undefined4 *)(param_3 + 0x94) = 8;
  return;
}

