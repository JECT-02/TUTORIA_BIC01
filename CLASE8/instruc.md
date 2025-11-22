# Proyecto 5: K8s Guardrails – Guía de Trabajo

## Reglas generales

### Commits
Formato: `tipo(alcance): descripción breve`  
Tipos: feat, fix, docs, refactor, test, chore  
Ejemplo: `feat(k8s): add NetworkPolicy for ingress restriction`

### GitHub
- Rama principal protegida: `main`
- Trabajo por rama feature: `feature/descripcion-corta`
- Pull Request obligatorio antes de mergear
- Cada PR debe cerrar un issue: `Closes #X`

### Kanban (GitHub Projects)
Columnas mínimas: Backlog, Ready, In Progress, Code Review, Testing, Done  
Un issue por tarea, una rama por issue, un PR por rama

## División de tareas – 2 estudiantes

### Estudiante 1 – Backend & Seguridad

#### Sprint 1 (días 1–3)
- Issue: `#1 Crear app Python con endpoint /health`
- Rama: `feature/app-health`
- Tareas:
  - Crear app/main.py con Flask o FastAPI
  - Agregar endpoint /health
  - Crear requirements.txt
- Kanban: Ready → In Progress → Code Review → Done
- PR: `feat(app): add health check endpoint`

#### Sprint 2 (días 4–6)
- Issue: `#2 Agregar securityContext al Deployment`
- Rama: `feature/security-context`
- Tareas:
  - Modificar k8s/deployment.yaml
  - Agregar runAsNonRoot, readOnlyRootFilesystem, allowPrivilegeEscalation false, capabilities.drop ALL
- Kanban: nueva tarjeta → Done
- PR: `feat(k8s): add securityContext to deployment`

#### Sprint 3 (días 7–10)
- Issue: `#3 Implementar script check_policies.py`
- Rama: `feature/policy-checker`
- Tareas:
  - Crear policy-checker/check_policies.py
  - Validar: no latest, resources.limits presentes, no privileged true
  - Generar reporte de cumplimiento
- Kanban: tarjeta → Done
- PR: `feat(policy): add YAML manifest validator`

### Estudiante 2 – Infra & Red

#### Sprint 1 (días 1–3)
- Issue: `#4 Crear namespace y desplegar app básica`
- Rama: `feature/k8s-base`
- Tareas:
  - Crear k8s/namespace.yaml
  - Crear k8s/deployment.yaml, k8s/service.yaml
  - Crear k8s/configmap.yaml, k8s/secret.yaml
  - Crear scripts/k8s-apply.sh
- Kanban: tarjeta → Done
- PR: `feat(k8s): add base manifests and apply script`

#### Sprint 2 (días 4–6)
- Issue: `#5 Agregar NetworkPolicy para restringir ingress`
- Rama: `feature/network-policy`
- Tareas:
  - Crear k8s/networkpolicy.yaml
  - Permitir solo tráfico desde pod o namespace específico
  - Probar con pod de prueba
- Kanban: tarjeta → Done
- PR: `feat(k8s): add NetworkPolicy for ingress control`

#### Sprint 3 (días 7–10)
- Issue: `#6 Crear script run-policy-checks.sh`
- Rama: `feature/policy-script`
- Tareas:
  - Crear scripts/run-policy-checks.sh
  - Ejecutar check_policies.py sobre manifiestos en k8s/
  - Mostrar resultados por consola
  - Integrar en Makefile si aplica
- Kanban: tarjeta → Done
- PR: `feat(script): add policy validation runner`