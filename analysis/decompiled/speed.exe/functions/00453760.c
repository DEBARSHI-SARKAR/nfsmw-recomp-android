/* speed.exe 00453760 FUN_00453760; analysis pseudocode, not buildable source.
 * calls 00451a30 FUN_00451a30
 * calls 004517c0 FUN_004517c0
 */

undefined8 * __thiscall FUN_00453760(undefined8 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    uVar4 = 0;
  }
  else {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar4 = FUN_00451a30((int)pcVar2 - (int)(param_2 + 1),0x11223344,0xabcdef00);
  }
  *param_1 = uVar4;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = FUN_004517c0((int)pcVar2 - (int)(param_2 + 1));
    *(undefined4 *)(param_1 + 1) = uVar3;
    *(char **)((int)param_1 + 0xc) = param_2;
    return param_1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(char **)((int)param_1 + 0xc) = param_2;
  return param_1;
}

