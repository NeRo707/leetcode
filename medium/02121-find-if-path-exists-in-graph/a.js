/**
 * @param {number} n
 * @param {number[][]} edges
 * @param {number} source
 * @param {number} destination
 * @return {boolean}
 */
const validPath = (n, edges, source, destination) => {
    const graph = new Map();
    let visited = new Set();
    for(let [v,e] of edges){
        if(graph.has(v)){
            graph.get(v).push(e);
        }else{
            graph.set(v, [e]);
        }
        if(graph.has(e)){
            graph.get(e).push(v);
        }else{
            graph.set(e, [v]);
        }
    }
    const dfs = (vertex) => {
        visited.add(vertex);
        let neigbours = graph.get(vertex);
        if(neigbours && neigbours.length > 0){
            for(let i = 0; i < neigbours.length; i++){
                if(!visited.has(neigbours[i])){
                    dfs(neigbours[i]);
                }
            }
        }
    }   
    dfs(source);
    return visited.has(destination);
};
