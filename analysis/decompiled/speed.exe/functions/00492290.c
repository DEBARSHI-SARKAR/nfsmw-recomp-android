/* speed.exe 00492290 FUN_00492290; analysis pseudocode, not buildable source.
 * calls 00491350 FUN_00491350
 * calls 00492160 FUN_00492160
 */

undefined4 * FUN_00492290(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  puVar3 = (undefined4 *)
           (*(code *)PTR_FUN_008ee4d0)(pcVar2 + (5 - (int)(param_1 + 1)),"EAGL4::SymbolEntry");
  *puVar3 = param_2;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(puVar3 + 1) - (int)param_1] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00492160(param_1,puVar3);
  return puVar3 + 1;
}

