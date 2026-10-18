/* speed.exe 00727240 FUN_00727240; analysis pseudocode, not buildable source.
 */

void FUN_00727240(code *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_009aa494;
  if ((undefined4 **)DAT_009aa494 != &DAT_009aa494) {
    do {
      cVar1 = (*param_1)(puVar2,param_2);
      if (cVar1 == '\0') {
        return;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while ((undefined4 **)puVar2 != &DAT_009aa494);
  }
  return;
}

