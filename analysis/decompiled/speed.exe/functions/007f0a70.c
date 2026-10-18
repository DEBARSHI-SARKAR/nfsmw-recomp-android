/* speed.exe 007f0a70 FUN_007f0a70; analysis pseudocode, not buildable source.
 * calls 007f0a31 FUN_007f0a31
 * calls 007f08ff FUN_007f08ff
 */

undefined4 FUN_007f0a70(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int in_EAX;
  int iVar5;
  undefined4 uVar6;
  int *unaff_EDI;
  undefined4 local_8;
  
  local_8 = 0;
  iVar5 = FUN_007f0a31();
  pcVar1 = (char *)(iVar5 + -8 + in_EAX);
  cVar2 = *pcVar1;
  if ((((('@' < cVar2) && (cVar2 < '[')) || (('`' < cVar2 && (cVar2 < '{')))) &&
      ((((cVar2 = pcVar1[1], '/' < cVar2 && (cVar2 < ':')) && (cVar3 = pcVar1[2], '/' < cVar3)) &&
       ((cVar3 < ':' && (cVar4 = pcVar1[3], '/' < cVar4)))))) && (cVar4 < ':')) {
    local_8 = 8;
    if (unaff_EDI != (int *)0x0) {
      *unaff_EDI = cVar4 + -0x14d0 + ((int)cVar3 + cVar2 * 10) * 10;
    }
    if (param_1 != (undefined4 *)0x0) {
      uVar6 = FUN_007f08ff(pcVar1 + 4,4);
      *param_1 = uVar6;
    }
  }
  return local_8;
}

