/* speed.exe 00614c50 FUN_00614c50; analysis pseudocode, not buildable source.
 * calls 007c6100 _sprintf
 * calls 00613eb0 FUN_00613eb0
 */

undefined4 FUN_00614c50(undefined4 param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char local_20 [32];
  
  if (*param_2 != 3) {
    return 0;
  }
  _sprintf(local_20,"%.14g",(double)(float)param_2[1]);
  pcVar2 = local_20;
  *param_2 = 4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_00613eb0(param_1,local_20,(int)pcVar2 - (int)(local_20 + 1));
  param_2[1] = iVar3;
  return 1;
}

